## Programação Estruturada
Este conteúdo é parte do curso Programação Estruturada com C. Estamos Disponibilizando alguns exemplos de programação utilizado a linguagem `C`.

Para a realização dos execícios estaremos utilizando o compilador `MinGW-64`.

###Processo de instalação do MinGW

#### MinGW-W64 Online Installer
Fazer o download do arquivo [MinGW-W64-install.exe](https://sourceforge.net/projects/mingw-w64/files/#:~:text=MinGW-W64-install.exe).

---

Após o processo de instalação configure o path dasvariáveis de ambiente do windows apontando para a pasta bin do MinGw.

---

### Windows como uma máquina de desenvolvedor Linux

Outra opção para o desenvolvimento do Linux com VS Code é usar uma máquina Windows com o [Windows Subsystem for Linux](https://docs.microsoft.com/windows/wsl/install-win10) (WSL).

### Windows Subsystem para Linux

Com o WSL, você pode instalar e executar distribuições Linux no Windows. Isso permite que você desenvolva e teste seu código-fonte no Linux enquanto ainda trabalha localmente em uma máquina Windows. WSL oferece suporte a distribuições Linux, como Ubuntu, Debian, SUSE e Alpine, disponíveis na Microsoft Store.

Quando combinado com a extensão [Remote - WSL](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-wsl) você obtém suporte completo para edição e depuração do VS Code durante a execução no contexto de uma distribuição Linux em WSL.

Consulte a documentação [Developing in WSL](https://code.visualstudio.com/docs/remote/wsl) para saber mais ou tente o tutorial introdutório [Working in WSL](https://code.visualstudio.com/docs/remote/wsl-tutorial).

### Visual Studio Code no Windows

#### Instalação

1. Download em [Visual Studio Code installer](https://go.microsoft.com/fwlink/?LinkID=534107) para Windows.
2. Após o download, execute o instalador (VSCodeUserSetup-{version}.exe). Sua execução demora poucos minutos.
3. Por padrão o VS Code será instalado em: `C:\users\{username}\AppData\Local\Programs\Microsoft VS Code`.

#### Extensões

1. Abra o visual studio e na área de adicionar extensões, procure por C/C++ [Microsoft C/C++ extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) para habilitar o suporte ao C e C++ nos Sistemas Windows, Linux, and macOS.

![cpp extension](https://github.com/microsoft/vscode-docs/raw/main/docs/languages/images/cpp/search-cpp-extension.png)

Depois de instalar a extensão, ao abrir ou criar um `*.cpp *.c`, você terá realce de sintaxe (colorização), completações inteligentes e focalizações (IntelliSense) e verificação de erros.

2. Abra o visual studio e na área de adicionar extensões, procure por [C/C++ Compile Run extension](https://marketplace.visualstudio.com/items?itemName=danielpinto8zz6.c-cpp-compile-run). Esta extensão auxilia na execução no Visual Studio Code para compilar e executar arquivos `c/c++` facilmente.
