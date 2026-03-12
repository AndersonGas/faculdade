from datetime import date

ano_atual = date.today().year

nascimento = int(input("Insira seu ano de nascimento: "))
if nascimento > ano_atual:
    print("Ano de nascimento inválido.")
    exit()

aniversario = input("Você ja fez aniversário (sim/não)? ").lower().strip()

if aniversario in ("sim", "s"):
    idade = ano_atual - nascimento
elif aniversario in ("não","nao","n"):
    idade=ano_atual-nascimento-1
else:
    print("Resposta inválida, utilize somente sim ou não.")

print(f"Você tem {idade} anos!")