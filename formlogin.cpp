#include "formlogin.h"


FormLogin::FormLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormLogin)

{
    cout <<"New form login"<<endl;
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
        ui->setupUi(this);
        hidePassword = true;
        setWindowTitle("Đăng nhập");
        ui->inputPassword->setEchoMode(QLineEdit::Password);
        ui->hidePasswordbt->setIcon(QIcon(":/resources/img/hidden.png"));
        ui->bgContainer->setPixmap(QPixmap(":/resources/img/Tong-hop-cac-hinh-anh-background-dep-nhat-21.jpg"));
        ui->bgContent->setPixmap(QPixmap(":/resources/img/background-while.webp"));
//        animation = new QPropertyAnimation(ui->btnLogin,"geometry");
//        animation -> setDuration(1000);
//        animation-> setStartValue(QRect(200,200,100,50));
//        animation ->setEndValue(ui->btnLogin->geometry());
//        animation->start();

//        animation = new QPropertyAnimation(ui->btnRegister,"geometry");
//        animation -> setDuration(1000);
//        animation-> setStartValue(QRect(200,200,100,50));
//        animation ->setEndValue(ui->btnRegister->geometry());
//        animation->start();

//        animation = new QPropertyAnimation(ui->inputPassword,"geometry");
//        animation -> setDuration(1000);
//        animation-> setStartValue(QRect(200,200,100,50));
//        animation ->setEndValue(ui->inputPassword->geometry());
//        animation->start();

//        animation = new QPropertyAnimation(ui->inputUserName,"geometry");
//        animation -> setDuration(1000);
//        animation-> setStartValue(QRect(200,200,100,50));
//        animation ->setEndValue(ui->inputUserName->geometry());
//        animation->start();

//        animation = new QPropertyAnimation(ui->labelUserName,"geometry");
//        animation -> setDuration(1000);
//        animation-> setStartValue(QRect(200,200,100,50));
//        animation ->setEndValue(ui->labelUserName->geometry());
//        animation->start();

//        animation = new QPropertyAnimation(ui->labelpassword,"geometry");
//        animation -> setDuration(1000);
//        animation-> setStartValue(QRect(200,200,100,50));
//        animation ->setEndValue(ui->labelpassword->geometry());
//        animation->start();

//        animation = new QPropertyAnimation(ui->question,"geometry");
//        animation -> setDuration(1000);
//        animation-> setStartValue(QRect(200,200,100,50));
//        animation ->setEndValue(ui->question->geometry());
//        animation->start();

//        animation = new QPropertyAnimation(ui->title,"geometry");
//        animation -> setDuration(1000);
//        animation-> setStartValue(QRect(200,200,100,50));
//        animation ->setEndValue(ui->title->geometry());
//        animation->start();

//        animation = new QPropertyAnimation(ui->hidePasswordbt,"geometry");
//        animation -> setDuration(1000);
//        animation-> setStartValue(QRect(200,200,100,50));
//        animation ->setEndValue(ui->hidePasswordbt->geometry());
//        animation->start();



}

FormLogin::~FormLogin()
{
    delete ui;
}

void FormLogin::on_btnLogin_clicked()
{
    string userName = ui->inputUserName->text().trimmed().toStdString();
    string password = ui->inputPassword->text().toStdString();

    if(password.empty()) {
        ui->errorPassword->setText("Không được để trống");
    }
    if(!userName.empty()) {
        vector<User> users = UtilDAO::getUserDAO()->findByProperties("user_name", userName);
        if (!users.empty()) {
                    if (users.at(0).getPassword()._Equal(password)) {
                        User user = users[0];
                        Session::USER_INFO = new User;
                        Session::USER_INFO->setId(user.getId());
                        Session::USER_INFO->setUserName(user.getUserName());
                        Session::USER_INFO->setPassword(user.getPassword());
                        Session::USER_INFO->setName(user.getName());
                        Session::USER_INFO->setEmail(user.getEmail());
                        cout << "ID User info = " << Session::USER_INFO->getId() << endl;
                        vector<UserRole> userRoles = UtilDAO::getUserRoleDAO()->findByIntProperties("user_id", user.getId());
                        if (!userRoles.empty()) {
                            cout << userRoles[0].getRoleId()<<endl;
                            Role role = UtilDAO::getRoleDAO()->findById(userRoles[0].getRoleId());
                            Session::ROLE_SYSTEM = new Role;
                            Session::ROLE_SYSTEM->setId(role.getId());
                            Session::ROLE_SYSTEM->setRoleName(role.getRoleName());
                            Session::ROLE_SYSTEM->setDescription(role.getDescription());
                            vector<Auth> auths = UtilDAO::getAuthDAO()->findByIntProperties("role_id", role.getId());

                            for (Auth item : auths) {
                                Menu menu = UtilDAO::getMenuDAO()->findById(item.getMenuId());
                                Session::LIST_MENU.push_back(menu);
                            }

                            for (Menu item : Session::LIST_MENU) {
                                Session::LIST_URL_MENU.push_back(item.getUrl());
                            }

                        }

                        // Login success
                        hide();
                        mainWindowLogin = new MainWindow();
                        mainWindowLogin->show();

                    }else {
                        ui->errorPassword->setText("Sai mật khẩu");

                    }
                }
                else {
                    ui->errorUserName->setText("Tên đăng nhập không tồn tại");

                }
    } else {
        ui->errorUserName->setText("Không được để trống");
    }
}


void FormLogin::on_inputUserName_textChanged(const QString &arg1)
{
    ui->errorUserName->setText("");
}


void FormLogin::on_inputPassword_textChanged(const QString &arg1)
{
    ui->errorPassword->setText("");

}

void FormLogin::keyPressEvent(QKeyEvent *event) {
    switch (event->key()) {
    case Qt::Key_Return :
    {
        ui->btnLogin->click();
        break;
    }
    }

}


void FormLogin::on_hidePasswordbt_clicked()
{
    hidePassword = !hidePassword;
    if(hidePassword == false){
        ui->inputPassword->setEchoMode(QLineEdit::Normal);
        ui->hidePasswordbt->setIcon(QIcon(":/resources/img/show.png"));
    }
    else{
        ui->inputPassword->setEchoMode(QLineEdit::Password);
        ui->hidePasswordbt->setIcon(QIcon(":/resources/img/hidden.png"));
    }
}




void FormLogin::on_btnRegister_clicked()
{
    hide();
    formRegister = new FormRegister();
    formRegister->show();
}

