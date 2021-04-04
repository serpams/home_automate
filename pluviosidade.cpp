int Chuva_A = A5;
int Chuva_D = 12;
int Chuva_VAL;
boolean Chovendo = false;
string strChuva;
int Rele = 11;
int Led = 13;
int Choveu = 0;

void setup(){
	Serial.begin(9600);
	pinMode(Chuva_D, INPUT);
	pinMode(Chuva_A, INPUT);
	pinMode(Rele, OUTPUT);
	pinMode(Led, OUTPUT);

	digitalWrite(Rele, HIGH);
	Serial.print("Sensor Chuva");
}
void loop() {
	Chuva_VAL = analogRead(Chuva_A);
	Chovendo = !(digitalRead(Chuva_D);

     if(Chovendo) {`
	strChuva = "Sim";
	if (Choveu == 0) {
	digitalWrite(Led, HIGH);
	Serial.println("Led Ligado! ");
	digitalWrite(Rele, LOW);
	Serial.println("Rele Ligado! ");
	delay(3000);
	digitalWrite(Rele, HIGH);
	Serial.println("Rele Desligado! ");
	Choveu = 1;
		}
	}
	else{
	  strChuva = "Nao";
	  digitalWrite(Led, LOW);
	  Serial.println("Led Desligado! ");
	  digitalWrite(Rele, HIGH);
	  Serial.println("Rele Desligado! ");
  }

     Serial.print("Esta Chovendo? ");
     Serial.print(strChuva);
     Serial.print("\t Nivel de Chuva: ");
     Serial.print(Chuva_VAL);
     Serial.println(" <---");
     delay(500);
}
