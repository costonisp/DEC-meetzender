Het hart van de oscilator is het AdaFruit Si5351 board.

<p><img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/ada5351.jpg"><a href="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/AdaSi5351Sch.pdf"><img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/AdaSi5351SchTN.jpg"><img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/I2CisolatorTN.jpg"></a></p> 

Dit board is d.m.v. een "Bidirectionele Dual I2C Isolator" gekoppeld met de besturingsprint.
5 Volt is via een DC-DC converter en de I2C signalen gaan via een <a href="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/ADUM1250_1251.pdf">ADUM1250 I2C-isolator.</a>

<p><img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/OscillatorBlockATN.jpg"><img src="https://github.com/costonisp/DEC-meetzender-test/blob/master/documentation/Si5351+interface/OscillatorBlockBTN.jpg">

De oscillator zelf zit in een massieve messing behuizing welke op de verzwakker print wordt geschroefd.
Daardoor kan het signaal niet via de I2C-bus of via de voeding leiding naar buiten lekken.
Alleen op die manier is het mogelijk om het signaal tot -145dBm te verzwakken
