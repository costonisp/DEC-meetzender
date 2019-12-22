<b> <p align="center"> Si5351 Oscillator Board met  Bidirectionele Dual I2C Isolator:</p></b>

<img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/ada5351.jpg"> | . | <a href="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/AdaSi5351Sch.pdf"><img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/AdaSi5351SchTN.jpg"></a>
----------------------------------- | --- | -----------------------------------------
 Si5351 oscillator board | . | schema Si5351 board
 |  | 
 |  | 
 <a href="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/I2Cisolator.jpg"><img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/I2CisolatorTN.jpg"> | <img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/Missing.jpg"> | <img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/Missing.jpg">
I2C isolator board met DC-DC converter en <br> geintegreerde <a href="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/ADUM1250_1251.pdf"> ADUM1250 </a> dual I2C isolator IC. | . | schema bidirectionele dual I2C isolator
<p></p>

<img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/OscillatorBlockATN.jpg"> | <img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/OscillatorBlockBTN.jpg">
------------------------------- | -------------------------------------
<p>
De Si5351 oscillator is in een massief messing blok gemonteerd welke op de messing afscherming van de verzwakker print wordt geschroefd. Aan de achterkant van de oscillator-module is het bidirectionele I2C Isolator board gemonteerd die met een bandkabel aan de besturingsprint wordt aangesloten.

Met een semi-rigid RG402 coax-kabel is de oscillator module op de verzwakker module aangesloten.
Hierdoor kan het signaal niet via I2C, voedings leiding of door een niet volledig hf-dichte coax naar buiten lekken.
Alleen op die manier is het mogelijk om het signaal tot -145dBm te verzwakken
