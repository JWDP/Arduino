int pirpin = 4;     // Mendeklarasikan variabel pirpin dengan nilai 4
int PIRstatus = 0;  // Mendeklarasikan variabel PIR Status PIR dengan nilai 0

void setup() { //fungsi yang hanya dijalankan sekali pada program
  // put your setup code here, to run once:
pinMode(4, INPUT);   // Mengatur pin 4 sebagau Input
pinMode(5, OUTPUT);  // engatur pin 5 sebagau Otput
Serial.begin(9600);  //harus disamakan dengan baud rate serial monitornya
}

void loop() { //fungsi perulangan
  // put your main code here, to run repeatedly:
PIRstatus = digitalRead(pirpin); // kita membaca keadaannya sehingga masuk ke pir status
if(PIRstatus == HIGH){  // Kondisi Pir ketika terdeteksi adanya gerakan
  Serial.println("Terdeteksi Ada Gerakan"); // maka pesan akan muncul
  digitalWrite(5, HIGH);  // dan Lampu pada pin nomor 5 akan nyala
} 
else { //tetapi bila tidak terdeteksi adanya gerakan maka
  Serial.println("Tidak Ada Gerakan"); // pesan akan muncul
  digitalWrite(5, LOW); // dan lampu pada pin nomor 5 akan mati
}
delay(1000); // berfungsi untuk menunda perulangan selama 1 detik
}