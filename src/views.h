#ifndef VIEWS_H
#define VIEWS_H

#include <QWidget>

class Views : public QWidget{
    Q_OBJECT
public:
    explicit Views(QWidget *parent = nullptr);
    const QStringList m_msg = {tr("Ação"), tr("É necessário reiniciar o Terminal Finances para que as alterações tenham efeito e não haja problemas. <br><b>Deseja fazer isso agora ?</b>"),
                                tr("Feche a abra o Terminal Finances."),
                                tr("Todos"),
                                tr("Conectado ao banco!"),
                                tr("credito"),
                                tr("Aviso"),
                                tr("Preencha todos os campos"),
                                tr("Crédito inserido com sucesso!"),
                                tr("Falha"),
                                tr("Falha ao inserir os dados"),
                                tr("debito"),
                                tr("Débito inserido com sucesso!"),
                                tr("Abrindo seu cliente de e-mail com relatório no corpo da mensagem!"),
                                tr("Erro"),
                                tr("Arquivo não pode ser salvo."),
                                tr("PDF ou impressão realizada com sucesso!"),
                                tr("Erro ao gerar relatório"),
                                tr("Falha ao consultar dados."),
                                tr("Uso correto"),
                                tr("Informe o termo que deseja pesquisar."),
                                tr("Resultado vazio"),
                                tr("Nenhum resultado encontrado para o termo:"),
                                tr("Vou Pesquisar outro termo"),
                                tr("Código"),
                                tr("Valor"),
                                tr("Tipo de Conta"),
                                tr("Descrição"),
                                tr("Operação"),
                                tr("Usuário"),
                                tr("Data de Criação"),
                                tr("Última atualização"),
                                tr("Falha ao resgatar dados."),
                                tr("Sobre Terminal Finances"),
                                tr("<h2>Terminal Finances 1.0.0</h2><p>Desenvolvido por Marcos Oliveira<br>Copyright 2021 Terminal Root Sistemas Inc.</p><p><a style='color:#17a2b8;font-weight:bold;' href='https://terminalroot.com.br/cpp/'>terminalroot.com.br</a></p><hr><p><i>The program is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.</i></p><br>"),
                                tr("Exportar Banco de Dados"),
                                tr("Banco de dados exportado com sucesso!"),
                                // Créditos Index 37 - 43
                                tr("DropCommerce Inc"),
                                tr("Faives LTDA"),
                                tr("Outros"),
                                tr("Salário"),
                                tr("Décimo Terceiro"),
                                tr("Férias"),
                                tr("Renda extra"),
                                // Créditos End
                                // Debitos Index 44 - 51
                                tr("Aluguel"),
                                tr("Candominio"),
                                tr("Conta de Luz"),
                                tr("Alimentação"),
                                tr("Pagamentos"),
                                tr("Telefone"),
                                tr("Internet"),
                                tr("Outros"),
                                // Debitos
                                tr("Erro ao remover o arquivo anterior."),
                                tr("Erro ao criar arquivo"),
                                tr("Não foi possível criar o arquivo."),
                                tr("Não foi possível ler o arquivo."),
                                tr("Crédito: "),
                                tr("Débito: "),
                                tr("Saldo: "),
                                tr("Data"),
                                tr("Tipo"),
                                tr("Positivo"),
                                tr(" \u2B24 SALDO POSITIVO"),
                                tr("Zerado"),
                                tr(" \u25EF SALDO ZERADO"),
                                tr("Negativo"),
                                tr(" \u2B24 SALDO NEGATIVO"),
                                tr("Falha ao aplicar permissões."),
                                tr("Janeiro"),
                                tr("Fevereiro"),
                                tr("Março"),
                                tr("Abril"),
                                tr("Maio"),
                                tr("Junho"),
                                tr("Julho"),
                                tr("Agosto"),
                                tr("Setembro"),
                                tr("Outubro"),
                                tr("Novembro"),
                                tr("Dezembro"),
                                tr("Erro ao atualizar os dados."),
                                tr("Deseja realmente deletar o item ")
    };
signals:

};

#endif // VIEWS_H
