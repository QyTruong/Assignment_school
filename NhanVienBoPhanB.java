package lib1;

public class NhanVienBoPhanB extends NhanVien{
    
    public NhanVienBoPhanB(int cmnd, String hoTen, String queQuan, String gioiTinh, int soDienThoai, double luong){
        super(cmnd, hoTen, queQuan, gioiTinh, soDienThoai, luong);
    }

    @Override
    public double tinhLuong(int soNgayCong) {
        return LuongTungBoPhan.B.heSo * this.luong * soNgayCong;
    }

    @Override
    public String toString() {
        return String.format("Ho ten: %s\nSo chung minh nhan dan: %d\nGioi tinh: %s\nQue quan: %s\nSo dien thoai: %d\nBo phan: %s", 
        this.hoTen, this.cmnd, this.gioiTinh, this.queQuan, this.soDienThoai, "Nhan vien bo phan B");
    }
}
