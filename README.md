

if preco_atual <= suporte:
    print(f"Preço tocou no suporte ({suporte}). Comprando!")
    martingale(api, ativo, timeframe, valor, "call")

elif preco_atual >= resistencia:
    print(f"Preço tocou na resistência ({resistencia}). Vendendo!")
    martingale(api, ativo, timeframe, valor, "put")

time.sleep(10)  # Aguarda antes de verificar novamente
