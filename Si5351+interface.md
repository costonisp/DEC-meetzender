Het hart van de oscilator is het AdaFruit Si5351 board.

<img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/ada5351.jpg"> | <b>-</b> | <a href="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/AdaSi5351Sch.pdf"><img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/AdaSi5351SchTN.jpg"></a>
----------------------------------- | --- | -----------------------------------------
AdaFruit Si5351 board | - | schema Si5351 board
 |  | 
<img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/I2CisolatorTN.jpg"> | . | <img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/Missing.jpg">
Bidirectionele Dual I2C isolator | . | schema Bidirectionele Dual I2C isolator
 | | 
<img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/OscillatorBlockATN.jpg"> | . | <img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/OscillatorBlockBTN.jpg">

De Si5351 oscillator zit in een massieve messing behuizing welke op de messing afscherming van de verzwakker print wordt geschroefd. Met een semi-rigid RG402 coax-kabel is de oscillator module op de verzwakker module aangesloten.
Hierdoor kan het signaal niet via signaal of voedings leiding of door een niet volledig hf-dichte coax naar buiten lekken.
Alleen op die manier is het mogelijk om het signaal tot -145dBm te verzwakken
