#include<iostream>

using namespace std;

int rect(int height, int width){
    return height*width;
}

int sqrt(int edge){
    return edge*edge;
}
int main(){
    int height, width;
    cin >> height >> width;
    cout << rect(height, width) << endl;

    int edge;
    cin >> edge;
    cout << sqrt(edge);
}