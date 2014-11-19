@echo off
REM Y= Dateien überschreiben I = Pfad erstellen, falls nicht vorhanden
xcopy C:\Users\Dennis\Documents\GitHub\Arduino_UnitTests\CopySkript\XML_Report.xml C:\Users\Dennis\.jenkins\jobs\Arduino-Unit-Test\workspace\ /Y /I
xcopy C:\Users\Dennis\Documents\GitHub\Arduino_UnitTests\CopySkript\XML_Report.xml C:\Users\Dennis\.jenkins\jobs\Arduino-Publish\workspace\ /Y /I