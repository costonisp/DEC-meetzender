<b> <p align="center"> Si5351 Oscillator Board met dual bidirectionele I2C coupler:</p></b>

<img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/ada5351.jpg"> | <b>-</b> | <a href="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/AdaSi5351Sch.pdf"><img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/AdaSi5351SchTN.jpg"></a>
----------------------------------- | --- | -----------------------------------------
 Si5351 oscillator board | - | schema Si5351 board
 |  | 
 |  | 
<img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/I2CisolatorTN.jpg"> | . | <img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/Missing.jpg">
Bidirectionele Dual I2C isolator met DC-DC spannings converter en ADUM1250 I2C coupler. | . | schema Bidirectionele Dual I2C isolator
 |  |
 |  |
<img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/OscillatorBlockATN.jpg"> | . | <img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/OscillatorBlockBTN.jpg">

De Si5351 oscillator is in een massief messing blok gemonteerd welke op de messing afscherming van de verzwakker print wordt geschroefd. Aan de achterkant van de oscillator-module is het bidirectionele I2C Isolator board gemonteerd die met een bandkabel aan de besturingsprint wordt aangesloten.

Met een semi-rigid RG402 coax-kabel is de oscillator module op de verzwakker module aangesloten.
Hierdoor kan het signaal niet via signaal of voedings leiding of door een niet volledig hf-dichte coax naar buiten lekken.
Alleen op die manier is het mogelijk om het signaal tot -145dBm te verzwakken
