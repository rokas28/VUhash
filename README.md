# 1-oji užduotis: Hash generatorius

Užduoties reikalavimus galite pamatyti [čia](https://github.com/blockchain-group/Blockchain-technologijos/blob/master/pratybos/1uzduotis-Hashavimas.md).  
Norint paleisti programą, jums reikia parsisiųsti norimą versiją ir paleisti `CMakeLists.txt` programos paleidimo failą.  

## [V0.1]() (2019-10-03)
### Pridėta:
- Pirminė programos verisja: sukurta `hash` funkcija, pagal užduoties reikalavimus.
- `hash_k();` funkcija hash'uoja kiekvieną `konstitucija.txt` failo eilutę ir jas išveda į ekraną.
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

- Failai su daugiau nei 10000 simbolių(skirtingi): `10000a.txt`(17747 simboliai) ir `10000b.txt`(16861 simbolis)

|  Failas          |  Hash'as                                                           |   
|:----------------:|:------------------------------------------------------------------:| 
|  skirtingasa.txt | DBFA9n397F2l0icu04B0in845DBAhx35uEClme697EB40Eo0C23eDxEf46qktn24   |
|  skirtingasb.txt | 702vnDBECAg1A85tx2bfr3C46FgoC9AE3ug5BAuFhCaD8b7uF5Fhp6mtBEtEqEBC   | 

- Failai su daugiau nei 10000 simbolių(panašūs): panaudotas `konstitucija.txt` failas ir pridėta po vieną skirtingą raidę teksto gale

|  Failas          | Hash'as                                                            |   
|:----------------:|:------------------------------------------------------------------:| 
|  panasusa.txt    | Ej8Cibjxy2B548w6dFC6s821d67dBe0avEn3ADtD5opBBBsBndB0sc567yFE7z8z   |
|  panasusb.txt    | n4sm09ACC82Bh93ABpwFkqxyipqB1F5d0Cb4rF12A19CA13oo99F85AA4FoEA77A   |

- Tuščias failas

| Failas           | Hash'as                                                            |   
|:----------------:|:------------------------------------------------------------------:| 
| tuscias.txt      | pqDBDy9C8hpwjF0AeDFmjBFBhFtusbE4CEux016Cxz3BCBECBukDo1qegAAA3BCB   |

- `Konstutucija.txt` eilučių hash'avimo laikas: 0.0439374sec.