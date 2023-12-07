import time as t
import random as r


class pantallas():
    tituloPrincipal = r"""   █████████                                          ████                   
  ███░░░░░███                                        ░░███                   
 ███     ░░░  ████████   ██████   ████████    ██████  ░███   ██████   ██████ 
░███         ░░███░░███ ░░░░░███ ░░███░░███  ███░░███ ░███  ███░░███ ███░░███
░███    █████ ░███ ░░░   ███████  ░███ ░███ ░███████  ░███ ░███ ░░░ ░███ ░███
░░███  ░░███  ░███      ███░░███  ░███ ░███ ░███░░░   ░███ ░███  ███░███ ░███
 ░░█████████  █████    ░░████████ ████ █████░░██████  █████░░██████ ░░██████ 
  ░░░░░░░░░  ░░░░░      ░░░░░░░░ ░░░░ ░░░░░  ░░░░░░  ░░░░░  ░░░░░░   ░░░░░░  
"""
    tituloSecundario = r"""_  _          __                                                     
\ \/ /__     / /_ _     __ __   __   __  __  __ __ 
 \  // _ \   / _// _ \   / _// _ \ / _ \ / _ \/  / / _// __ \
 / // // /  / / /  _/  / /_ / // // / / // // / / // /_ / /_/ /
// \_/   \_/ \_/   \_/ \_/// // \__/ /_/\__/ \_/

"""
    width = 50  # ancho de las cajas

    def print_granelco(self):
        print(pantallas.tituloPrincipal, end='')

    def print_yoTeConozco(self):
        print(pantallas.tituloSecundario, end='')

    def print_line(self):
        for i in range(self.width):
            print("═", end='')

    def print_upperBox(self):
        print("╔═", end='')
        self.print_line()
        print("═╗")

    def print_separator(self):
        print("╠═", end='')
        self.print_line()
        print("═╣")

    def print_lowerBox(self):
        print("╚═", end='')
        self.print_line()
        print("═╝")


class pantallaInicio(pantallas):
    mensajePrincipal = "Esto es una prueba"

    def print_mensaje(self):
        self.print_upperBox()
        print(self.mensajePrincipal)
        self.print_lowerBox()


pInicio = pantallaInicio()

pInicio.print_granelco()
pInicio.print_yoTeConozco()
pInicio.print_mensaje()
