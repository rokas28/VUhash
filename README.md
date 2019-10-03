# 1-oji užduotis: Hash generatorius

Užduoties reikalavimus galite pamatyti [čia](https://github.com/blockchain-group/Blockchain-technologijos/blob/master/pratybos/1uzduotis-Hashavimas.md).  
Norint paleisti programą, jums reikia parsisiųsti norimą versiją ir paleisti `CMakeLists.txt` programos paleidimo failą.  

## [V0.1]() (2019-10-03)
### Pridėta:
- Pirminė programos verisja: sukurta `hash` funkcija, pagal užduoties reikaavimus.
- `hash_k();` funkcija hash'uoja kiekvieną `konstitucija.txt` failo eilutę.
- Testinių įvedimo failų pavyzdžiai.
- `CMakeLists.txt` - Programos paleidimo failas.
- `.gitignore` failas.
- `README.md` failas.

### Eksperimentinio tyrimo-analizė

- Failai su vienu simboliu:

|  Failas          |  Hash'as                                                           |   
|:----------------:|:------------------------------------------------------------------:| 
|  1a.txt          | uEDABy58CgoCjABADE0BC4F67gDqw4eFtoCdk3x4kBn8ECFcCq0jB7tk2qgq0401   |
|  1b.txt          | ECF0A1iaB5B4Fd0Aie72bCl373tD28nEg694BCn3AdAD9C85cF8F6bBdAAC19n10   |          

- Failai su daugiau nei 10000 simbolių(skirtingi):  17747  16861

|  Failas          |  Hash'as                                                           |   
|:----------------:|:------------------------------------------------------------------:| 
|  10000a.txt      | 34BlACm2529y259C9hDs0wf8F9m8949fD9o5DC2hCCFoxACCjyh8EiC1BCFAn0DB   |
|  10000b.txt      | sF8F0uaE8CCx5FecmD15j09C2B6AzsBeq2EAyf22BB6A3b5EjAg8kj11lA839vA2   | 

- Failai su daugiau nei 10000 simbolių(panašūs):

|  Failas          | Hash'as                                                            |   
|:----------------:|:------------------------------------------------------------------:| 
|  panasusa.txt    |DEbCFk0jnE2A11B549AxDmfBEChxE6CenCFD7mF18l2jBo72CAoCnEr1BxwEh8zm    |
|  panasusb.txt    |p1r7l9rv44CD7o4E7o3x0xCBFDD50nwsi0m8Bxu2sbb2504C8EDBDaw81EC892DA    |

- Tuščias failas

| Failas           | Hash'as                                                            |   
|:----------------:|:------------------------------------------------------------------:| 
| tuscias.txt      | pqDBDy9C8hpwjF0AeDFmjBFBhFtusbE4CEux016Cxz3BCBECBukDo1qegAAA3BCB   |