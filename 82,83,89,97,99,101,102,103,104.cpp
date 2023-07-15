#include <bits/stdc++.h>

using namespace std;
// khang nhớ bỏ gạch chỗ void này để nó làm cùng với bài 97 nhé.


//    void checktamgiac(int a, int b, int c) {
//        if (a == b || a == c || b == c) {
//        cout << "can";
//        }else if (a * a == c * c + b * b || a * a == b * b - c * c || a * a == b * b + c * c){//vinh dung pytago, a la canh huyen b, c ka canh goc vuong
//        cout << "tam giac vuong";
//        }
//        else {
//            cout << "tam giac thuong";
//        }
//
//    }



int main()
{
    //bai 82
//    float a;
//    float b;
//    float c;
//    float socaonhat;
//
//    cin >> a;
//    cin >> b;
//    cin >> c;
//    socaonhat == a;
//    if (socaonhat < b) {
//        socaonhat = b;
//    }else if (socaonhat < c) {
//        socaonhat = c;
//    }
//    cout  << "so cao nhat trong 3 so la: " << socaonhat;
//    int tong = 0;
//    int n;
//    cin >> n;
//    for (int i = 1; i < n; i++) {
//        tong = tong + i;
//    }
//    cout << tong;

//bai 83
//    float a; cin >> a;
//    float b; cin >> b;
//     khi 2 số âm nhân cho nhau thì ra dương. dương nhân âm ra âm và ngược lại như vậy. dương nhân dương ra dương
//    if (a * b > 0) {
//        cout << "cung dau";
//    }else {
//        cout << "ko cung dau";
//    }

//bai 89
////    int n;
////    int tong = 0;
////    cin >> n;
////    for (int i = 1; i < n; i ++ ) {
////        if (i % 2 == 1) {
////            tong = tong + i;
////        }else {
////            continue;
////        }
////    }
////    cout << tong;
////    return 0;

//bai 97 | vinh dung void cho do rối
//    int a; cin >> a;
//    int b; cin >> b;
//    int c; cin >> c;
//    checktamguac(a, b, c);

//bai 99
//    float bienphu;
//    float a; cin >> a;
//    float b; cin >> b;
//    float c; cin >> c;
//    if (a > b) {
//        bienphu = a;
//        a = b;
//        b = bienphu;
//    }
//    if (b > c) {
//        bienphu = b;
//        b = c;
//        c = bienphu;
//    }
//    if (a > c){
//        bienphu = a;
//        a = c;
//        c = bienphu;
//    }
//    cout << a << " " << b << " " << c;

// bai 101

//    int thang; cin >> thang;
//    int nam; cin >> nam;
//    bool namnhuan = true;
//    if (thang >= 13) {
//        cout << "thang bi loi";
//    }
//    if (nam % 4 == 1) {
//        namnhuan = false;
//    }
//    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
//        cout << "31 ngay";
//    }
//    if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
//        cout << "30 ngay";
//    }
//    if (thang == 2) {
//        if (namnhuan == true) {
//            cout << "\n thang 2 cua nam " << nam << " la 29 ngay vi do la nam nhuan";
//        }else {
//            cout << "\n thang 2 cua nam " << nam << " la 28 ngay vi do khong phai la nam nhuan";
//        }
//    }


/// bai 102
//    int ngay = 0; cin >> ngay;
//    int thang = 0; cin >> thang;
//    int nam = 0; cin >> nam;
//
//    bool namnhuan = true;
//    if(nam % 4 == 1) {
//        namnhuan = false;
//    }
//    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
//        if (ngay > 31) {
//            cout << "loi ngay";
//            return 0;
//        }
//        if (ngay == 31) {
//            ngay = 1; thang = 1; nam += 1;
//            if (thang == 12) {
//                thang = 1; nam += 1;
//            }
//        }else if (ngay < 31) {
//            ngay += 1; nam += 1;
//        }
//    }
//    if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
//        if (ngay > 30) {
//            cout << "loi ngay";
//            return 0;
//        }
//        if (ngay == 30){
//            ngay = 1; thang += 1; nam += 1;
//        }else if (ngay < 30) {
//            ngay += 1; thang += 1; nam += 1;
//        }
//    }
//    if (thang == 2){
//        if (namnhuan == true) {
//            if (ngay == 29) {
//
//                ngay = 1; thang += 1; nam += 1;
//            }else if (ngay < 29) {
//                ngay += 1; thang += 1; nam += 1;
//            }
//
//        }else {
//            if (ngay == 28) {
//                    ngay = 1; thang += 1; nam +=1;
//            }else if (ngay < 28) {
//                    ngay = ngay + 1; thang += 1; nam +=1;
//                }
//            }
//    }
//
//    cout << "ngay ke tiep se la " << ngay << " " << thang << " " << nam;

//bai 103

//    int ngay = 0; cin >> ngay;
//    int thang = 0; cin >> thang;
//    int nam = 0; cin >> nam;
//
//    bool namnhuan = true;
//    if(nam % 4 == 1) {
//        namnhuan = false;
//    }
//    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
//        if (ngay > 31) {
//            cout << "loi ngay";
//            return 0;
//        }
//        if (ngay == 31) {
//            ngay = 1; thang = 1; nam -= 1;
//            if (thang == 1) {
//                thang = 12; nam -= 1;
//            }
//        }else if (ngay < 31) {
//            ngay -= 1; nam -= 1;
//        }
//    }
//    if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
//        if (ngay > 30) {
//            cout << "loi ngay";
//            return 0;
//        }
//        if (ngay == 30){
//            ngay = 1; thang -= 1; nam -= 1;
//        }else if (ngay < 30) {
//            ngay -= 1; thang -= 1; nam -= 1;
//        }
//    }
//    if (thang == 2){
//        if (namnhuan == true) {
//            if (ngay == 29) {
//
//                ngay -= 1; thang -= 1; nam -= 1;
//            }else if (ngay < 29) {
//                ngay -= 1; thang -= 1; nam -= 1;
//            }
//
//        }else {
//            if (ngay == 28) {
//                    ngay -= 1; thang -= 1; nam -=1;
//            }else if (ngay < 28) {
//                    ngay = ngay - 1; thang -= 1; nam -=1;
//                }
//            }
//    }
//
//    cout << "ngay truoc do la " << ngay << " " << thang << " " << nam;

// bai 104 vinh không làm được
}

