/*
Version 3112
  Configuratie menu uitgebreid met Drive mA 2,4,6 of 8 mA
  SI5351MaxFreq default 150 MHz.  Instelbaar tot 300 MHz wordt niet in EEPROM geschreven.
  Harmonic factor instelbaar 3e, 5e, 7e, 9e, 11e, 13e, 15e. tot max 2250 MHz

Version 3110
  Met drukknop S7 naar calibratie menu, zelfde drukknop >5 sec een soft reset.
  Library beperking max Freq tot 150MHz daarna PLL uit lock niet doorgaand afstembaar in 3e harmonische
  max si5351 waarop deze nog stabiel werkt instelbaar van 150-300 MHz
  wordt opgeslagen als SiMaxFreq=150 MHz en omgezet naar MaxOscFreq (ULL) in Hz
  maximale harmonische die gebruikt wordt voor de frequentie instelling. , 
  Calibratie correctie voor Xtal variabel gemaakt int8_t -128/127
  in ppm van -128ppm tot +127ppm of in 0.1ppm van -12.8ppm tot +12.7 ppm
  voor goedkope Xtal neem ppm, voor betere xtallen in 0.1 ppm
  
Version 310
  Extra lcd.clear() in setup
  frequentie basis tot 250 MHz
  3e harmonic tot 750 MHz  1/3 = -9.54dB  ~ -10dB
  5e harmonic tot 1250MHz  1/5 =  -14dB

Version308HF2 meld zich als V.30802
  Soft Restart toegevoegd, omdat soms de display rotzooi toont.
  Mode switch S9 (rechtonder) >3 seconden ingedrukt dan naar 'void setup()'

     
Version308HF meldt zich als V.3080
  Alles voor ADF435x eruit

Version 3.08
  Sweep menu uitgeschakeld
  S6 Store Frequency in EEprom
  S7 Get Frequency from EEprom
   
Version 307
  For digitasters S9 = HF / V-UHF  S8 = HambandMenu , S7 = SweepMenu , S6 = MemoryMenu    
  S9 Mode omschakeling geimplementeerd
  S8 HamBand omschakeling geimplementeerd    

Version 306 (zoals 206 dan voor nieuwe print)
  For testboard and new controlboard HF on CLK_0 , Fref on CLK_1
  LiquidCrystal lcd(46,44,39,38,37,36); // LiquidCrystal(rs, e, d4, d5, d6, d7) , display pootjes: 4,6,11,12,13,14 
  
Vanaf Version 300 nieuwe  besturingsprint
  Display op pin 
  SPI bus enabled op 10 polige plug
                 
Versie 085 , protoVersie software geschreven door Arie PA3A.
Deze versie werkt met de oude etherkit library.
Latere versies/uitbreiding zijn van Co Sto.
*/
