[//]: # (MarkDown format documentation: https://guides.github.com/pdfs/markdown-cheatsheet-online.pdf)
[//]: # (Table with 3 columns and 5 lines)

<b> <p align="center"> Si5351 Oscillator Board met  Bidirectionele Dual I2C Isolator:</p></b>

<img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/ada5351.jpg"> | <a href="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/AdaSi5351Brd.pdf"><img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/AdaSi5351BrdTN.jpg"></a> | <a href="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/AdaSi5351Sch.pdf"><img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/AdaSi5351SchTN.jpg"></a>
----------------------------------- | --- | -----------------------------------------
 Si5351 oscillator board | board layout | schema Si5351 board
 |  | 
 |  | 
 <img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/I2CisolatorTN.jpg"> | <a href="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/BidirectionalDualI2CIsolatorBrd.pdf"><img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/BidirectionalDualI2CIsolatorBrdTN.jpg"> | <a href="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/BidirectionalDualI2CIsolatorSch.pdf"><img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/BidirectionalDualI2CIsolatorSchTN.jpg">
I2C isolator board.  | board layout | schema bidirectionele dual I2C isolator
<p></p>

<img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/OscillatorBlockATN.jpg"> | <img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/OscillatorBlockBTN.jpg">
------------------------------- | -------------------------------------
<p></p>
Het AdaFruit Si5351 oscillator-board is in een massief messing blok gemonteerd en dit word op de messing afscherming van de verzwakker print geschroefd. 
Aan de achterkant van de oscillator-module is het I2C Isolator board gemonteerd. Dit board heeft een DC-DC converter en heeft een geintegreerd <a href="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/ADUM1250_1251.pdf"> ADUM1250 </a> isolator IC . Het board word met een bandkabel op de besturingsprint aangesloten.

Met een semi-rigid RG402 coax-kabel is de oscillator module op de verzwakker module aangesloten.
Daardoor kan het signaal niet via I2C, voedings leiding of door een niet volledig hf-dichte coax naar buiten lekken.
Op deze manier is het mogelijk om het signaal tot -145dBm te verzwakken

[//]: # (This may be the most platform independent comment)
