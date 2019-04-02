#include <QCryptographicHash>
#include <QDebug>

#include "utils/cryptography.h"

namespace codespot {

Cryptography::Cryptography() {

    QByteArray arr;
    arr.append("password");
    QByteArray hash = QCryptographicHash::hash(arr, QCryptographicHash::Md5);
    qDebug() << hash.toHex() << endl;
}


Cryptography::~Cryptography() { }

}
