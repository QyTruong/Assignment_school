package lib1;

import java.util.ArrayList;
import java.util.Scanner;

public class QuanLyNhanVien {
    ArrayList<NhanVien> ds;

    public QuanLyNhanVien(){
        ds = new ArrayList<>();
    }

    public void themNhanVien(NhanVien nv){
        ds.add(nv);
        System.out.println("Da them thanh cong!!");
    }

    public void xoaNhanVien(NhanVien nv){
        ds.remove(nv);
        System.out.println("Da xoa thanh cong!!");
    }

    @Override
    public String toString() {
        StringBuilder bd = new StringBuilder();
        ds.forEach(q -> bd.append(q));
        return bd.toString();
    }

    public NhanVien traCuuNhanVien(int cmnd){
        for (NhanVien nv : ds){
            if (nv.cmnd == cmnd)
                return nv;
        }
        return null;
    }
    public NhanVien tracuuNhanVien(String s){
        for (NhanVien nv : ds){
            if (nv.hoTen.equals(s) || nv.queQuan.equals(s))
                return nv;
        }
        return null;
    }

    public void tinhLuong(Scanner sc){
        
    }
}
