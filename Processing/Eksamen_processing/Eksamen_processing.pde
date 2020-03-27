import processing.serial.*;
Serial myPort;  // Create object from Serial class
String val;     // Data received from the serial port

void setup(){
  myPort  =  new Serial (this, "COM3",  9600); // Set the com port and the baud rate according to the Arduino IDE
  myPort.bufferUntil ( '\n' );   // Receiving the data from the Arduino IDE

}

void draw() {
  
  
}
