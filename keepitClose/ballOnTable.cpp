#include <iostream>
#include <bitset>
#include <set>
#include <math.h>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <unordered_map>

using namespace std;

#define all(v) v.begin(), v.end()
//#define int long long


class Ball;

class Table {
public:
    Table(int w, int h);
    ~Table(){};
    bool contains_point(int x, int y);
    void reflect(Ball* b);
    int width;
    int height;
};

class Ball {
public:
    Ball(int _x, int _y, int _vx, int _vy, Table* t);
    ~Ball(){ };

    void move(int dt);
    int get_x() { return x; }
    int get_y() { return y; }
    int get_vx() { return vx; }
    int get_vy() { return vy; }
    void set_location(int _x, int _y);
    void set_speed(int _vx, int _vy);
    bool duplicatePosition();
    int x;
    int y;
    int vx;
    int vy;
    int reflected = 0;
    unordered_map<string, vector<pair<pair<int, int>,int>>> histo;
    Table* table;
    string dir;
};

Table::Table(int w, int h)
{
    width = w;
    height = h;
}

bool Table::contains_point(int x, int y) {
    return x >= 0 && x <= width && y >= 0 && y <= height;
}

void Table::reflect(Ball* b) {
    int x = b->get_x();
    int y = b->get_y();
    int vx = b->get_vx();
    int vy = b->get_vy();
    while (!contains_point(x, y)) {
        if (x < 0) {
            x = -x;
            vx = -vx;
        }
        if (x > width) {
            x = 2 * width - x;
            vx = -vx;
        }
        if (y < 0) {
            y = -y;
            vy = -vy;
        }
        if (y > height) {
            y = 2 * height - y;
            vy = -vy;
        }
    }
    b->reflected++;
    b->set_location(x, y);
    b->set_speed(vx, vy);

    if(vx == 1 && vy ==1) b->dir = "DR";
    if(vx == 1 && vy ==-1) b->dir = "DL";
    if(vx == -1 && vy ==1) b->dir = "UR";
    if(vx == -1 && vy ==-1) b->dir = "UL";

    if (b->histo.count(b->dir) > 0){
        bool flag = false;
        for(pair<pair<int, int>, int>& el: b->histo[b->dir]){
            if(el.first.first == x && el.first.second == y){
                el.second = 1;
                flag = true;
            }
        }
        if(!flag){
            b->histo[b->dir].push_back({pair(pair(b->x,b->y), 0)});
        }
    }else{
        b->histo[b->dir]={pair(pair(b->x,b->y), 0)};
    }
}


Ball::Ball(int _x, int _y, int _vx, int _vy, Table* t)
{
    table = t;
    set_location(_x, _y);
    set_speed(_vx, _vy);
}

void Ball::set_location(int _x, int _y) {
    if (!table->contains_point(_x, _y))
        abort();
    x = _x;
    y = _y;
}

void Ball::set_speed(int _vx, int _vy) {
    vx = _vx;
    vy = _vy;
}

bool Ball::duplicatePosition()
{
    if(histo.count(dir) > 0){
        auto v = histo[dir];
        for(auto pos: v){
            if(pos.first.first == x && pos.first.second == y && pos.second >=1){
                return true;
            }
        }
    }
    return false;
}

void Ball::move(int dt)
{
    x += vx * dt;
    y += vy * dt;


    if (!table->contains_point(x, y)){
        table->reflect(this);
    }
}

int main()
{
    int T;
    cin >> T;


    while(T--){
        int n,m, i, j, i2, j2;
        string s;
        cin >> n >> m >> i >> j >> i2 >> j2 >> s;
        n--;m--;i--;j--;i2--;j2--;

        if(i2 == i && j2 == j) {
            cout << 0 << endl;
            continue;
        }
        Table t(n, m);

        int xs = 0;
        int ys = 0;

        if(s == "DR"){
            xs = 1;
            ys = 1;
        }
        if(s == "DL"){
            xs = 1;
            ys = -1;
        }
        if(s == "UR"){
            xs = -1;
            ys = 1;
        }
        if(s == "UL"){
            xs = -1;
            ys = -1;
        }

        Ball b(i, j, xs, ys, &t);
        b.dir = s;

        bool reached = false;
        while(!reached && !b.duplicatePosition()){

            b.move(1);
            if(b.x == i2 && b.y == j2) reached = true;
        }

        if(reached) cout << b.reflected << "\n";
        else cout << -1 << "\n";
    }

}
