// cria referência ao form e ao elemento h3 (onde será exibida a resposta)
const frm = document.querySelector("form")
const debug = document.querySelector("h4")
const resp1 = document.querySelector("#outResp1")
const resp2 = document.querySelector("#outResp2")


// cria um ouvinte de evento, acionado quando o botão  submit for clicado
frm.addEventListener("submit", (e) => {
    const medicamento = frm.inMedicamento.value // obtém o nome do medicamento
    const preco = Number(frm.inPreco.value) // obtém o preço do medicamento
    const doisItens = preco * 2
    const desconto = doisItens % 2 // centavos do valor total
    const promocao = doisItens - desconto
    resp1.innerText = `Promoção de ${medicamento}`
    resp2.innerText = `Leve 2 por apenas ${promocao.toFixed(2).replace('.', ',')}`
    console.log(`Valor de preço: ${preco}`)
    console.log(`valor 2 itens: ${doisItens}`)
    console.log(`valor do desconto: ${desconto}`)
    console.log(`Valor de desconto: ${promocao}`)

    e.preventDefault() // inpede envio do formuário
})
    