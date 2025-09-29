# New-Member-Assignments
## Setup Guide  

1. Install **Visual Studio Code**.  
2. Install the **PlatformIO IDE** extension in VS Code.  
3. Open **PowerShell** and run the following command (replace `C:\your path\` with your actual path):  

   ```powershell
   "C:\your path\.platformio\penv\Scripts\python.exe -m pip install intelhex"

4. Install the USB driver to flash code to the MCU: [Silicon Labs USB-to-UART Bridge VCP Drivers](https://www.silabs.com/software-and-tools/usb-to-uart-bridge-vcp-drivers?tab=downloads)

5. Restart VS Code after the extension has been installed.

6. Open the PlatformIO extension (alien-looking symbol on the left sidebar).

7. Pick a folder and open the NewMemberAssn1 folder.

8. At this point, all errors should disappear.

9. Build the base project from the bottom-left taskbar by clicking the check mark button.

10. Upload the code from the same taskbar using the arrow button.
