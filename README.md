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

- 3 ir 4 analizės dalys, buto tikrinamos su `hashrank`, kuris yra aprašytas [čia](https://github.com/dqmis/hashrank/blob/master/README.md). Analizės rezultatai:

**Legend**  
`A` - Average hashing time of "Konstitucija.txt"  
`B` - Letter collision test time  
`C` - Letter collision similarity average  
`D` - Number of collisions found in Letter test  
`E` - Word collision test time  
`F` - Word collision similarity average  
`G` - Number of collisions found in Word test  

| Github nick  | Link to the repo                | Course/group | Reference test | A      | B          | C      | D    | E          | F      | G  |
|--------------|---------------------------------|--------------|----------------|--------|------------|--------|------|------------|--------|----|
| dqmis        | dqmis/vuhash                    | 2/1          | 5.7301         | 0.0052 | 1417.6514  | 0.1108 | 9917 | 1497.0956s | 0.0056 | 0  |
| gytautele    | gytautele/blockchain            | 2/2          | 5.7201         | 0.0047 | 1043.5663  | 0.0136 | 0    | 1060.4037  | 0.0141 | 49 |
| emilisb      | emilisb/Hash                    | 2/2          | 5.3863         | 0.0035 | 804.7102   | 0.0108 | 0    | 820.5668   | 0.0108 | 0  |
| gitguuddd    | gitguuddd/Hash_generatorius     | 2/2          | 7.119          | 0.0285 | 6833.3648  | 0.0308 | 2    | 6840.2643  | 0.005  | 0  |
| zygisau      | zygisau/ZA-256                  | 2/1          | 5.4321         | 0.0291 | 27320.3243 | 0.0148 | 96   | 27213.3451 | 0.0121 | 5  |
| rokas28      | rokas28/VUhash                  | 2/1          | 6.0001         | 0.0047 | 1491.2054  | 0.0058 | 0    | 1073.8285  | 0.006  | 18 |
| RokasDomeika | RokasDomeika/VU_hash            | 2/2          | 3.4918         | 0.0014 | 363.7676   | 0.0053 | 0    | 382.4108   | 0.0056 | 26 |
| andriusjok   | Andriusjok/OriginalHashFunction | 2/1          | 6.7236         | 0.0159 | 4026.8039  | 0.5665 | 0    | 3994.1818  | 0.5665 | 0  |
