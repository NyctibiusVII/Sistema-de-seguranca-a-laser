<h1 align="center">
  <br>
    <img src="https://user-images.githubusercontent.com/52816125/83941765-651c3f00-a7c4-11ea-886d-e1bb0cef25b8.png" width="150" alt="Laser">
  <br>
    Sistema de segurança a laser
</h1>
<h4 align="center"> O sistema de segurança a laser é um projeto que foi desenvolvido justamente para a <b>segurança e monitoramento</b> tanto de empresas como residencias tendo objetivo alertar possíveis invasões. O sistema foi criado para a 26ª edição da <b>FeCEAP</b> (<a href="https://ceappedreira.org.br/atuacao/eventos/feceap/">Feira de Inovação e Ciências</a>).</h4>
<p align="center">
  <img alt="Versão" src="https://img.shields.io/static/v1?label=Version&message=1.0&color=greeen&labelColor=000000">
  <img alt="Repository size" src="https://img.shields.io/github/repo-size/NyctibiusVII/Sistema-de-seguranca-a-laser?color=greeen&labelColor=000000">
  <a href="https://github.com/NyctibiusVII/Sistema-de-seguranca-a-laser/blob/master/LICENSE">
    <img alt="License" src="https://img.shields.io/static/v1?label=License&message=MIT&color=greeen&labelColor=000000">
  </a>
  <a href="https://picpay.me/Matheus_nyctibius_vii">
    <img alt="Donate" src="https://img.shields.io/static/v1?label=$&message=Donate&color=ff69b4&labelColor=000000">
  </a>
</p>
<p align="center">
  <a href="#Como-foi-feito-">Projeto</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#como-funciona-">Como funciona</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#montando-o-projeto-">Montando</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#licença-%EF%B8%8F">Licença</a>
</p>

## Como foi feito 🤯
   O sistema foi feito com o **Arduíno UNO** tendo componentes para detecção do laser e uma placa Bluetooth (HC-06) para o envio SMS no celular do(a) proprietário(a), o software dele foi feito em duas linguagens o arduíno e java(App Inventor). A programação que criamos do arduíno foi feita para a detecção, armazenamento e envio de dados. Para fazer a aplicação utilizamos o java com a IDE do app inventor.

### O projeto se divide em 3 partes:

#### ● Laser (emissor de luz)
<details>
   <summary>Detalhes</summary>

 ```
 Modelo: Laser Pointer green
 Alcance: 40 km
 Potência: 98.000mw
 Medidas: (A*L*C) 2x2x11,5
 Uso: Profissional
 ```
</details>
<br>

#### ● LDR (Sensor de Luminosidade)
<details>
   <summary>Detalhes</summary>

 ```
 Marca: OEM
 Tamanho: 5mm Largura x 4mm Profundidade x 3mm Altura
 Potência máxima: 100mW
 Diâmetro: 5mm;
 Resistência: luz no 10Lux (a 25 °C ) 8 ~ 20KO;
 Resistência: escuro a 0 Lux 1.0MO (min);
 Valor de gama: 100 ~ 10Lux: 0,7;
 Dissipação de energia a 25 °C: 100mW;
 Max Voltage: 150V;
 Pico de resposta espectral: 540nm.
 ```
</details>
<br>

#### ● HC-06 (Notificação)
<details>
   <summary>Detalhes</summary>

 ```
 Marca: CFACIL
 Microcontrolador: hc06
 Protocolo: V2.0+EDR
 Frequência: 2.4Ghz Banda ISM
 Modulação: GFSK
 Potencia: =4dBm, Class 2
 Sensibilidade: =-84dBm at 0.1% BER
 Velocidade: Assíncrona: 2.1Mbps(Max) / 160 kbps, Síncrona: 1Mbps/1Mbps
 Segurança: Autenticação e criptografia
 Tensão: 3,6V a 6V
 Temperatura de trabalho: -20°C ~+75°
 Comunicação: USART - Serial RS232 nível TTL
 Velocidade serial: 9600 (padrão), e pode ser configurado para: 38400,19200,38400,57600,115200,230400 e 460800
 Senha padrão: 1234
 Comandos: AT
 Tamanho: 3.57cm x 1.52cm
 ```
</details>
<br>

## Como funciona 🧩
O projeto funciona da seguinte maneira, o laser de 98000mw é apontado para o detector no arduíno que fica atualizando constantemente a variável de luminosidade, se o arduíno não detectar mais o feixe de luz especifico do laser ele alerta enviando um SMS com informações de data, hora e duração, sendo assim no celular aparece opções de ativar o alarme sonoro e ligar para a policia.
**obs:** No app existem configurações para testar os componentes como leds e buzzer.

| <img src="https://user-images.githubusercontent.com/52816125/83943147-fc3ac400-a7cf-11ea-9c86-d6a1c5cb0e40.jpg" width="300px"> | <img src="https://user-images.githubusercontent.com/52816125/83943139-f5ac4c80-a7cf-11ea-87e1-5b11c0b6b2cc.jpg" width="300px"> |
| :---: | :---: |
| <img src="https://user-images.githubusercontent.com/52816125/83943142-f80ea680-a7cf-11ea-953b-39935add412a.jpg" width="300px"> | <img src="https://user-images.githubusercontent.com/52816125/83943143-fa710080-a7cf-11ea-8b39-5c1b99977b2f.jpg" width="300px"> |

| <img src="https://user-images.githubusercontent.com/52816125/83943145-fc3ac400-a7cf-11ea-91ac-3a614c5c86da.jpg" width=625px> |
| :---: |

## Montando o projeto 👾
⚠Em momento de criação do tutorial...⚠
|       COMPONENTES| Quantidade |      Tamanho | Necessidade |           Descrição |
|------------------|------------|--------------|-------------|---------------------|
|      Arduino UNO |          1 |     Qualquer | Obrigatório |            Hardware |
|              Led |          4 |          5mm | Obrigatório | ON/OFF/Luminosidade |
|       Led Custom |          1 |     Qualquer | Obrigatório |       Luz de alerta |
|         Resistor |          3 |     Qualquer | Obrigatório | Resistencia p/ leds |
|            Botão |          1 |     Qualquer |     Mediano |        Liga/Desliga |
|              LDR |          1 |          5mm | Obrigatório |              Sensor |
|             Tubo |          1 | min: 5x6x2mm | Obrigatório |       P/ isolar LDR |
| Pano Preto Fosco |          1 | Suficiente para cobrir o interior do tubo | Obrigatório |       P/ isolar LDR |
|           Buzzer |          1 |     Qualquer | Obrigatório |              Alarme |
|       Protoboard |          1 |     Qualquer | Obrigatório |    Base p/ conexões |
|            Laser |          1 |     Qualquer | Obrigatório |        Feixe de luz |
|     Jumper-Macho |         19 |    min: 10cm | Obrigatório |           <-------> |
|     Jumper-Femeá | Não precisa |    min: 10cm | Não precisa |           o-------o |
|Jumper-MachoFemeá |          4 |    min: 10cm | Obrigatório |           <-------o |
|       Bateria 9V |          1 |     Qualquer |     Mediano | Bateria p/ independência do projeto |
| Adaptador da bateria 9v |          1 |Qualquer |     Mediano | Adaptador bateria 9v p/ Arduino |

#### Leds
|Quantidade |      Cor |
|-----------|----------|
|         1 | Vermelho |
|         1 |    Verde |
|         2 |   Branco |
|         1 |   Custom (vermelho e azul simulando giroflex policial) |

#### Resistores
|Quantidade |      Cor |    Para... |
|-----------|----------|------------|
|         2 |🟤⚫🔴🟨|  Led 🔴🟢 |
|         1 |🟤⚫🔴🟨|     Led ⚪ |
|         1 |🟢🔵⚫🟨|      Botão |
|         1 |🟤⚫🟤🟨|        LDR |
| Não precisa | Não tem | Led Custom |

#### Jumpers
|  Tipo | Quantidade |    Para... |
|-------|------------|------------|
| <---> |          2 |      Botão |
| <---> |          2 |     Buzzer |
| <---> |          2 |        LDR |
| <---> |          4 | Protoboard |
| <---> |          3 | Led Custom |
| <---> |          2 |  Led 🔴🟢 |
| <---o |          4 |  Led 🔴🟢 |
| <---> |          4 |     Led ⚪ |

#### Requisitos
- Notebook ou PC
- IDE arduino instalada e atualizada
- Cabo USB para conectar o arduino ao PC
- Saber C++ 🤷🏻‍♂️
- Divirta-se montando 🎉✨🧡

## Criadores 👨‍💻
| <img src="https://user-images.githubusercontent.com/52816125/83942234-28524700-a7c8-11ea-8b43-74f0eeb3a45b.jpg" width="100px"><br><sub><a href="https://www.instagram.com/f._ryan_/?hl=pt-br">@RyanTibúrcio</a></sub> | <img src="https://user-images.githubusercontent.com/52816125/83942310-b5959b80-a7c8-11ea-8fcd-0136de334553.jpg" width=100><br><sub><a href="https://www.instagram.com/dustfingerxx/?hl=pt-br">@PedroHenrique</a></sub> | <img src="https://user-images.githubusercontent.com/52816125/90341686-05b68880-dfd8-11ea-969c-70c9ce9d0278.jpg" width=100><br><sub><a href="https://www.instagram.com/nyctibius_vii/?hl=pt-br">@MatheusVidigal</a></sub> | <img src="https://user-images.githubusercontent.com/52816125/83942546-c6dfa780-a7ca-11ea-834c-002259b10e72.jpg" width=105><br><sub><a href="https://www.facebook.com/igor.felix.3958">@IgorOliveira</a></sub> |
| :---: | :---: | :---: | :---: |

## Contribuição 💭
Confira a página de [contribuição](./CONTRIBUTING.md) para ver como começar uma discução e começar a contribuir.

## Licença ⚖️
Esse projeto está sob a licença MIT. Veja o arquivo [LICENSE](https://github.com/NyctibiusVII/Sistema-de-seguranca-a-laser/blob/master/LICENSE) para mais detalhes.

## Contato ✉️
| <img src="https://user-images.githubusercontent.com/52816125/90341686-05b68880-dfd8-11ea-969c-70c9ce9d0278.jpg" width=100><br><sub><a href="https://www.instagram.com/nyctibius_vii/?hl=pt-br">@MatheusVidigal🦊</a></sub> |
| :---: |

<p align="left">
   <a href="https://www.linkedin.com/in/matheus-vidigal-nyctibiusvii/">
      <img alt="Matheus Vidigal / Linkedin" src="https://img.shields.io/badge/-Matheus Vidigal-greeen?style=flat&logo=Linkedin&logoColor=white" />
   </a>
   <a href="https://mail.google.com/mail/u/1/#inbox?compose=GTvVlcSGLCKpKJfwPsKKqzXBplKkGtCLvCQcFWdWxCxQFfkHzzjVkgzrMFPBgKBmWFHvrjrCsMqSH">
      <img alt="Matheus Vidigal / Linkedin" src="https://img.shields.io/badge/-Matheus Vidigal-greeen?style=flat&logo=Gmail&logoColor=white" />
   </a>
</p>
