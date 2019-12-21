Het hart van de oscilator is het AdaFruit Si5351 board.

<img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/ada5351.jpg"> | <b>-</b> | <a href="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/AdaSi5351Sch.pdf"><img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/AdaSi5351SchTN.jpg"></a>
----------------------------------- | --- | -----------------------------------------
AdaFruit Si5351 board | - | schema Si5351 board
 |  | 
<img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/I2CisolatorTN.jpg"> | . | <img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/I2CisolatorTN.jpg">
Bidirectionele Dual I2C isolator | . | schema Bidirectionele Dual I2C isolator
 | | 
<img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/OscillatorBlockATN.jpg"> | . | <img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/OscillatorBlockBTN.jpg">

De oscillator zelf zit in een massieve messing behuizing welke op de verzwakker print wordt geschroefd.
Daardoor kan het signaal niet via de I2C-bus of via de voeding leiding naar buiten lekken.
Alleen op die manier is het mogelijk om het signaal tot -145dBm te verzwakken
