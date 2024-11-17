const frm = document.querySelector("form")
const resp1 = document.querySelector("#outResp1")
const resp2 = document.querySelector("#outResp2")

frm.addEventListener("submit", (e) =>{
    const produto = frm.inProduto.value
    const preco = Number(frm.inPreco.value)
    const leve3 = preco * 2 + desconto3
    const desconto3 = preco * 0.50
    resp1.innerText = `${produto} - Promoção: Leve 3 por R$: ${leve3.toFixed(2).replace(".", ",")}`
    resp2.innerText = `O terceiro produto custa apenas: ${desconto3.toFixed(2).replace(".", ",")}`

    e.preventDefault()

})