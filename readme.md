<h1>Smart Desk</h1>
<img style="width:25rem" src="https://github.com/Innovation4x/SmartDesk/blob/main/images/product1.jpeg?raw=true" alt="product">
<h2>How to Use IR SENSOR module and RELAY module with WIZnet W5100S-EVB-Pico</h2>
<p>In this project we will make our existing work desk a smart one. We will control all our electronic gadgets with a Relay Module equipped with an IR sensor.
When the IR sensors detect any object i.e. anyone is sitting on the desk, depending on how the pins are configured, it will turn on/off the charger, monitor and other devices connected to the Relay Module.
</p>

<br/>
<h2>Things used in this project</h2>
<ol>
    <li>
    Hardware
    <ul>
        <li><p>WIZnet W5100S-EVB-Pico * 2</p></li>
        <li><p>Camera</p></li>
        <li><p>IR Sensor Module</p></li>
        <li><p>4ch Relay Module</p></li>
        <li><p>Jumper Wires</p></li>
        <li><p>Breadboard</p></li>
    </ul>
    </li>
    <li>
    Software
    <ul>
        <li><p>Arduino CC</p></li>
    </ul>
    </li>
</ol>
<br/>
<h2>Story</h2>
<p>There is a huge wastage of energy in our daily life, which can be saved if we turn off the devices when not in use. Unfortunately we humans are so busy that we forget to turn them off. So to solve this problem, we thought of making all the electrical components smart.
Initially we started with making our work desk smart. For this we placed an IR sensor on the desk which will detect if anyone is sitting on the desk, and toggle its output. The IR sensor is connected to a microcontroller which controls the Relays based on the output of the IR sensor.
</p>
<br/>
<h2>Components</h2>
<ul>
    <li>
        <p><strong>IR Sensor</strong><br/>IR sensor is an electronic device that emits light in order to sense some object of the surroundings. An IR sensor can measure the heat of an object as well as detect the motion. Usually, in the infrared spectrum, all the objects radiate some form of thermal radiation.</p>
        <img style="width:25rem" src="https://github.com/Innovation4x/SmartDesk/blob/main/images/irsensor.jpg?raw=true" alt="ir-sensor">
    </li>
    <li>
        <p><strong>4ch Relays</strong><br/>A power relay module is an electrical switch that is operated by an electromagnet. The electromagnet is activated by a separate low-power signal from a microcontroller. When activated, the electromagnet pulls to either open or close an electrical circuit.</p>
        <img style="width:25rem" src="https://github.com/Innovation4x/SmartDesk/blob/main/images/4chrelay.jpeg?raw=true" alt="4ch-relay">
    </li>
    <li>
        <p><strong>W5100S-EVB-Pico</strong><br/>WIZnet Pico is a microcontroller evaluation board based on the Raspberry Pi RP2040 and fully hardwired TCP/IP controller W5100S – and basically works the same as Raspberry Pi Pico board but with additional Ethernet via W5100S.</p>
            <img style="width:25rem" src="https://github.com/Innovation4x/SmartDesk/blob/main/images/wiznet-pico.png?raw=true" alt="wiznet-pico">
    </li>
</ul>
<br/>
<h2>Circuit Diagram</h2>
    <img style="width:40rem" src="https://github.com/Innovation4x/SmartDesk/blob/main/images/circuit-diagram.png?raw=true" alt="circuit-diagram">
<br/>
<h2>Explaination</h2>
<h3>Circuit</h3>
<p>
The VCC & GND pins of Camera, IR sensor and 4ch Relay are connected to VCC and GND respectively. The IR sensor’s DOUT pin is connected to  GP1  of the WIZnet Pico 2 and the output from WIZnet Pico 1 is connected to GP0 of the WIZnet Pico 2. <br>

If the camera detects any human face, it will turn the GP0 of WIZnet Pico 2 to HIGH and when the IR sensor detects something it will turn the GP1 of WIZnet Pico 2 to LOW.<br>

When the GP0 and GP1 of WIZnet Pico 2 are HIGH and LOW respectively, the Relays connected to GP2, GP3, GP4 and GP5 are turned HIGH ie when any human is detected by the camera and the he is sitting on his desk, the microcontroller will turn on the relays.

</p>
<br>
<h3>Code</h3>
<p>
First we initialized the variables R1, R2, R3, R4 to GPIO PINS 2,3,4,5 respectively. These pins aue OUTPUT pins and used to control the Relay. Two more variables CAM_IN and IR_IN are initialized to GPIO PINS 0 and 1 respectively.
<br>

The setup function sets the GPIO pins 2,3,4,5 and LED_BUILTIN to OUTPUT to control the relays and the GPIO pins 0, 1 are set to INPUT.
<br>

The loop function runs recursively and checks the INPUT from GPIO pins 0 and 1. If the GPIO 0 is HIGH and GPIO 1 is LOW, the GPIO pins 2,3,4,5 are turned HIGH to activate the relays else they are turned LOW.
</p>
<br>
<h2>Images</h2>
<img style="width:25rem" src="https://github.com/Innovation4x/SmartDesk/blob/main/images/product1.jpeg?raw=true" alt="product">
<img style="width:25rem" src="https://github.com/Innovation4x/SmartDesk/blob/main/images/product2.jpeg?raw=true" alt="product">
<img style="width:25rem" src="https://github.com/Innovation4x/SmartDesk/blob/main/images/product3.jpeg?raw=true" alt="product">
<img style="width:25rem" src="https://github.com/Innovation4x/SmartDesk/blob/main/images/product4.jpeg?raw=true" alt="product">
<img style="width:25rem" src="https://github.com/Innovation4x/SmartDesk/blob/main/images/product5.jpeg?raw=true" alt="product">
<img style="width:25rem" src="https://github.com/Innovation4x/SmartDesk/blob/main/images/product6.jpeg?raw=true" alt="product">
<img style="width:25rem" src="https://github.com/Innovation4x/SmartDesk/blob/main/images/product7.jpeg?raw=true" alt="product">
<img style="width:25rem" src="https://github.com/Innovation4x/SmartDesk/blob/main/images/product8.jpeg?raw=true" alt="product">