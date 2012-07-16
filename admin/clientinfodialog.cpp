// clientinfodialog.cpp
// Delta3 project -- Universal remote control system

#include "clientinfodialog.h"
#include "ui_clientinfodialog.h"

//------------------------------------------------------------------------------
ClientInfoDialog::ClientInfoDialog(
    qint16 clientId,
    Network* net,
    QWidget* parent
):
    QDialog( parent ),
    ui( new Ui::ClientInfoDialog ),
    network_( net )
{
    ui->setupUi( this );
    ui->fieldOS->setText( network_->getClient(clientId)->getOs() );
    ui->fieldHash->setText( network_->getClient(clientId)->getHash() );
    ui->fieldDevice->setText( network_->getClient(clientId)->getDevice() );
    ui->fieldCaption->setText( network_->getClient(clientId)->getCaption() );
}
//------------------------------------------------------------------------------
ClientInfoDialog::~ClientInfoDialog()
{
    delete ui;
}
//------------------------------------------------------------------------------
