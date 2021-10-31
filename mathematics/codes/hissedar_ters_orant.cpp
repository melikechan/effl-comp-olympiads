#include <iostream>

using namespace std;

int ebob(int a,int b){
    if(!a) return b;
    else if(!b) return a;
    else return ebob(min(a,b),max(a,b)%min(a,b));
}

int ekok(int a,int b){
    return (a*b)/ebob(a,b);
}

int main(){
    int n,htoplam = 0,hekok = 1,hterstoplam = 0,hebob=INT32_MAX,htersebob=INT32_MAX;
    cout << "Hissedar Sayisi: ";
    cin >> n;
    int h[n],hters[n];
    cout << "Hissedarlarin paylarini giriniz: ";
    for(int i=0;i<n;i++){
        cin >> h[i];
        htoplam += h[i];
        hekok = ekok(hekok,h[i]);
    }
    for(int i=0;i<n;i++){
        hters[i] = htoplam*hekok/h[i];
        hterstoplam += hters[i];
    }
    for(int i=0;i<n;i++){
        hebob = min(hebob,ebob(h[i],htoplam));
        htersebob = min(htersebob,ebob(hters[i],hterstoplam));
    }
    for(int i=0;i<n;i++){
        if(hebob != INT32_MAX) h[i] /= hebob;
        if(htersebob != INT32_MAX) hters[i] /= htersebob;
    }
    if(hebob != INT32_MAX) htoplam /= hebob;
    if(htersebob != INT32_MAX) hterstoplam /= htersebob;
    for(int i=0;i<n;i++){
        cout << i+1 << ". Hissedar: (" << h[i] << "/" << htoplam << " [% "<< (double)h[i]*(double)100/(double)htoplam <<"] ) | (" << hters[i] << "/" << hterstoplam << " [% "<< (double)hters[i]*(double)100/(double)hterstoplam << "] )" << endl;
    }
    cin >> n;
    return 0;
}