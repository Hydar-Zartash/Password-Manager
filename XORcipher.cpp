#include <string>
#include <bitset>
#include <iostream>

using namespace std;

void cipher(string &in, string key){
    //.size has a constant complexity, so it shouldn't affect our runtime to call it repeatedly
    for(int i = 0; i < in.size(); i++){ 
        in[i] ^= key[i%key.size()];
        bitset<8>x(in[i]);
        cout<<x<<endl;
    }
}

int main(int argc, char* argv[]){
    string x = argv[argc-2];
    string y = argv[argc-1];
    cipher(x, y);

}