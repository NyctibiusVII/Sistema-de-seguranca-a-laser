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
  <a href="#tecnologias-">Tecnologias</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#layout-">Layout</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#licença-%EF%B8%8F">Licença</a>
</p>
 
   ## Como foi feito 🤯
   O sistema foi feito com o Arduíno uno tendo componentes para detecção do laser e uma placa Bluetooth (HC-06) para o envio SMS no celular do(a) proprietário(a), o software dele foi feito em duas linguagens o arduíno e java(App Inventor). A programação que criamos do arduíno foi feita para a detecção, armazenamento e envio de dados. Para fazer a aplicação utilizamos o java com a IDE do app inventor.

  #### O projeto se divide em 3 partes:
    - Emissor de luz     (laser)
    - Detecção           (LDR)
    - Notificação        (HC-06)



## Como funciona 🧩
O projeto funciona da seguinte maneira, o laser de 98000mw é apontado para o detector no arduíno que fica atualizando constantemente a variável de luminosidade, se o arduíno não detectar mais o feixe de luz especifico do laser ele alerta enviando um SMS com informações de data, hora e duração, sendo assim no celular aparece opções de ativar o alarme sonoro e ligar para a policia. 
**obs:** No app existem configurações para testar os componentes como leds e buzzer. 

<p align="center">

| <img src="https://user-images.githubusercontent.com/52816125/83943147-fc3ac400-a7cf-11ea-9c86-d6a1c5cb0e40.jpg" width="300px"> |   <img src="https://user-images.githubusercontent.com/52816125/83943139-f5ac4c80-a7cf-11ea-87e1-5b11c0b6b2cc.jpg" width="300px"> |
| :---: | :---: | :---: |
|   <img src="https://user-images.githubusercontent.com/52816125/83943142-f80ea680-a7cf-11ea-953b-39935add412a.jpg" width="300px"> |  <img src="https://user-images.githubusercontent.com/52816125/83943143-fa710080-a7cf-11ea-8b39-5c1b99977b2f.jpg" width="300px">|
<img src="https://user-images.githubusercontent.com/52816125/83943145-fc3ac400-a7cf-11ea-91ac-3a614c5c86da.jpg" width="600px">
</p>

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
