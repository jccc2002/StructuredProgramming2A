import sys

lista = list()



sensorInput = "$GPGGA,134658.00,5106.9792,N,11402.3003,W,2,09,1.0,1048.47,M,-16.27,M,08,AAAA*60"

if __name__ == "__main__":
    print("GPS activity")
    # print(sensorInput)

    # print("////////////////")


    listaSensor = sensorInput.split(",")

    hr = listaSensor[1][:2]
    min = listaSensor[1][2:4]
    sec = listaSensor[1][4:6]

    # listaSensor[1] = f'hr: {hr}, min: {min}, sec: {sec}'
    
    # print(listaSensor)
    print("///////////////")
    print("Header config:", listaSensor[0])
    print("UTC:", f'hr: {hr}, min: {min}, sec: {sec}', )
    latitud = listaSensor[2] + listaSensor[3]
    print("Latitud:",latitud)
    longitud = listaSensor[4] + listaSensor[5]
    print("Longitud:", longitud)


    ### Convertir input en lista##
    # print("Header config", lista[0])
    # print("UTC:", utcDecoder(lista[1]))
    # print("Latitud:", lista[1] + lista [2])
    # print("Longitud:", lista[3] + lista[4])
