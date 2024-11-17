const frm = document.querySelector("form")
const resp1 = document.querySelector("#outResp1")

frm.addEventListener("submit", (e) =>{
    const preco = Number(frm.inPreco.value)
    const tempo = Number(frm.inTempo.value)
    const valor =  Math.ceil(tempo / 15) * preco // Divide o tempo gasto por 15,arrendoda pra cima e multiplica pelo preço.
    resp1.innerText = `Valor à Pagar RS: ${valor.toFixed(2).replace(".", ",")}`

    e.preventDefault()

})