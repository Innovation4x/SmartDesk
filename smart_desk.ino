// Written by Nikit Khakholia on May 20' 2022

// variables initialized with values as GPIO pin numbers
//  R1,R2,R3,R4 are OUTPUT pins to control relay
//  CAM_IN is INPUT from CAMERA module, 1=face detected, 0=face not detected
//  IR_IN is INPUT from IR sensor MODULE, 1=not detected, 0=detected something
int R1 = 2, R2 = 3, R3 = 4, R4 = 5, CAM_IN = 0, IR_IN = 1;

void setup()
{
    // setting RELAY pins as OUTPUT
    pinMode(R1, OUTPUT);
    pinMode(R2, OUTPUT);
    pinMode(R3, OUTPUT);
    pinMode(R4, OUTPUT);

    // setting CAMERA and IR pins as INPUT
    pinMode(CAM_IN, INPUT);
    pinMode(IR_IN, INPUT);

    // setting onboard LED as OUTPUT
    pinMode(LED_BUILTIN, OUTPUT);
}
void loop()
{
    // checking if both CAMERA and IR detects something
    if (digitalRead(CAM_IN) != 0 && digitalRead(IR_IN) == 0)
    {
        // if detected, then turn ON onboard LED and the RELAYS
        digitalWrite(LED_BUILTIN, HIGH);
        digitalWrite(R1, HIGH);
        digitalWrite(R2, HIGH);
        digitalWrite(R3, HIGH);
        digitalWrite(R4, HIGH);
    }
    else
    {
        // if not detected, then turn OFF onboard LED and the RELAYS
        digitalWrite(LED_BUILTIN, LOW);
        digitalWrite(R1, LOW);
        digitalWrite(R2, LOW);
        digitalWrite(R3, LOW);
        digitalWrite(R4, LOW);
    }
}