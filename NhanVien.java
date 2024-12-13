package lib1;

public class NhanVien {
    protected int maSo;
    protected int cmnd;
    protected String hoTen;
    protected String queQuan;
    protected String gioiTinh;
    protected int soDienThoai;
    protected double luong = 100000;
    private static int dem = 0;

    {
        dem++;
        this.maSo = dem;
    }

    public NhanVien(int cmnd, String hoTen, String queQuan, String gioiTinh, int soDienThoai, double luong){
        this.cmnd = cmnd;
        this.hoTen = hoTen;
        this.queQuan = queQuan;
        this.gioiTinh = gioiTinh;
        this.soDienThoai = soDienThoai;
        this.luong = luong;
    }

    public int getCmnd() {
        return cmnd;
    }
    public String getGioiTinh() {
        return gioiTinh;
    }
    public String getHoTen() {
        return hoTen;
    }
    public String getQueQuan() {
        return queQuan;
    }
    public int getSoDienThoai() {
        return soDienThoai;
    }
    public void setCmnd(int cmnd) {
        this.cmnd = cmnd;
    }
    public void setGioiTinh(String gioiTinh) {
        this.gioiTinh = gioiTinh;
    }
    public void setHoTen(String hoTen) {
        this.hoTen = hoTen;
    }
    public void setQueQuan(String queQuan) {
        this.queQuan = queQuan;
    }
    public void setSoDienThoai(int soDienThoai) {
        this.soDienThoai = soDienThoai;
    }

    public double tinhLuong(int soNgayCong){
        return this.luong * soNgayCong;
    }

    @Override
    public String toString() {
        return String.format("Ho ten: %s\nSo chung minh nhan dan: %d\nGioi tinh: %s\nQue quan: %s\nSo dien thoai: %d\nBo phan: %s", 
        this.hoTen, this.cmnd, this.gioiTinh, this.queQuan, this.soDienThoai, "Nhan vien binh thuong");
    }
}
