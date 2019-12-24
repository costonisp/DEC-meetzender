<b> <p align="center"> VERZWAKKER PRINT :</p></b>

[![](verzwakker_print/AttenuatorSch1.jpg)](verzwakker_print/AttenuatorSch1.pdf) |    [![](verzwakker_print/AttenuatorBrdTN.jpg)](verzwakker_print/AttenuatorBrd.pdf) |     [![](verzwakker_print/AttenuatorSch6.jpg)](verzwakker_print/AttenuatorSch6.pdf)
--------------------------------------------- | --- |  --------------------------------------------
**5x Digitale stap verzwakker** | **Board layout**  | **Power Supply verzwakker**
|  | 
|  |

<p>De verzwakker module bestaat uit 5 identieke deelverzwakkers. Iedere deelverzwakker bestaat uit een <a href="verzwakker_print/DAT-31R5A-PN.pdf">DAT-31R5A-PN</a> digitale stap verzwakkers van Mini Circuits met daarbij behorende stuur logica. Ieder IC met componenten zit op het PCB in een eigen omgeving. Als afscherming dienen twee uitgefreezde messing platen die boven en onder over de PCB gemonteerd worden. Daardoor ontstaan 5 kleine rf-dichte kamertjes. De koppeling tussen de 5 verzwakkers gebeurt met kleine stukjes 50 ohm RG402 kabel.</p

[![](verzwakker_print/AttenuatorFrontTN.jpg)](verzwakker_print/AttenuatorFront.jpg) |    [![](verzwakker_print/AttenuatorBackTN.jpg)](verzwakker_print/AttenuatorBack.jpg)

<p>Een enkele verzwakker is 6-bit met een resolutie van 0.5dB, tot max -31.5dB instelbaar.
Hiermee kan maximaal -157.5dB ingesteld worden. In de praktijk blijkt de grens bij 145dB verzwakking ligt.</p>
<p>
De verzwakker kan tot minstens 3000 MHz goed werken. In de meetzender ligt de praktische grens iets boven 1000 MHz.
Dit komt door de schakeltijden in de Si5351 oscillator die een blokgolf produceerd waarbij harmonischen worden gebruikt om boven 150 Mhz te komen. De 150 MHz wordt bepaald door de etherkit library, die boven 150 MHz onvoorspelbaar gedrag vertoond. De Si5351 chip kan tot ca. 250 MHz bruikbare signalen geeft</p>
