//long -> -2.147.483.648 to 2.147.483.647
//unsigned long -> 0 to 4.294.967.295

unsigned long time;

void setup() {
  Serial.begin(9600);
}

void loop() {
  String cadena = "45754935"; // 12:42:34.935
  
  Serial.println(hora(cadena));
  
  delay(2000);
}

String hora(String cadena){ // 86400000 milisegundos son 24 horas
  long milisegundosTotales = cadena.toInt(); // toInt() retorna long xD
  long milisegundos = milisegundosTotales % 1000;
  
  long segundosTotales = milisegundosTotales / 1000;
  long segundos = segundosTotales % 60;
  
  long minutosTotales = segundosTotales / 60;
  long minutos = minutosTotales % 60;
  
  long horas = minutosTotales / 60;

  String hora = "";
  hora = hora + horas + ":";
  hora = hora + minutos + ":";
  hora = hora + segundos + ".";
  hora = hora + milisegundos;

  return hora;
  
}
