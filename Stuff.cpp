#include <stdio.h>
#include <math.h>

// Function template
// Chuc nang : Description
void func_name() {
}

// Chuc nang 1: Kiem tra so nguyen
void int_checker() {
    // Tao va nhap bien
    int x;
    printf("x = "); scanf("%d", &x);
    
    // TODO: Kiem tra neu x la so nguyen
    // if() printf("")

    // Kiem tra neu x la so nguyen to
    bool isNguyenTo = true;
    if (x < 2) {
        printf("Khong the xet tinh nguyen to cua x.\n"); 
        return;
    }
    if (x > 3) {
        for (int i = 2 ; i <= x ; i++ ) {
            if (x % i == 0) { isNguyenTo = false; break; }
        }
        if (isNguyenTo) printf("x la so nguyen to.\n");
        else printf("x khong la so nguyen to.\n");
    }


    // Kiem tra neu x la so chinh phuong
    bool isChinhPhuong = false;
    for (int i = 1 ; i <= (int) sqrt(x) ; i++) {
        if (x == i * i) {isChinhPhuong = true; break;}
    }

    if (isChinhPhuong) printf("x la so chinh phuong.\n");
    else printf("x khong la so chinh phuong.\n");
}

// Chuc nang 2: Tim Uoc so chung va boi so chung cua 2 so
void function2() {
    // Tao va nhap bien
    int x, y;
    printf("x = "); scanf("%d", &x);
    printf("y = "); scanf("%d", &y);

    // Holder
    int tmp1 = x, tmp2 = y;

    // Tim USCLN cua 2 so
    while (tmp1 != tmp2) {
        if (tmp1 > tmp2) tmp1 -= tmp2;
        else tmp2 -= tmp1;
    }
    printf("Uoc so chung lon nhat cua 2 so: %d", tmp1);

    // Holder
    tmp1 = x, tmp2 = y;

    // TODO: Tim BSCNN cua 2 so
    printf("Boi so chung lon nhat cua 2 so: %d", tmp1);
}

// Chuc nang 3: Chuong trinh tinh tien cho quan Karaoke
void karaoke_count() {
    // Tao va nhap bien
    int begin, end;
    printf("Gio bat dau: "); scanf("%d", &begin);
    printf("Gio ket thuc: "); scanf("%d", &end);

    // TODO: Rework
    if (begin < 12) {
        printf("Vi quan khong hoat dong truoc 12h, gio bat dau chuyen thanh 12h.");
        return;
    }
    if (end > 23) {
        printf("Vi quan khong hoat dong sau 23h, gio ket thuc chuyen thanh 23h.");
        return;
    }
    int working_hours = end - begin;

    // Salary init
    int salary = 150000;
    int total_amount = 0;

    // Tinh toan tien luong nhan duoc
    if (working_hours <= 3) total_amount = salary * working_hours;
    else total_amount = salary * 3 + salary * 0,7 * (working_hours - 3);

    if (begin >= 14 && begin <= 17) total_amount *= 0,9;

    printf("Ban nhan duoc %d sau khi lam %d tieng", total_amount, working_hours);
}

// Init menu
int main() {
    //  Khoi tao bien chon menu
    int menu_choice;

    // TODO: Tao giao dien cho menu
    // printf(""); 

    // Chon chuc nang
    printf("Input: "); scanf("%d", &menu_choice);

    switch (menu_choice)
    {
    case 1:
        int_checker(); break;
    case 2:
        function2(); break;
    case 3:
        karaoke_count(); break;
    // case <function>:
    //     (); break;
    default:
        printf(""); break;
    }
}
