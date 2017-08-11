#ifndef PY_H
#define PY_H

#include <QMap>
#include <QtSql>

class PY
{
public:
    PY();

public:
     QMap<QString, QString> getPinYin(const QString& keys);
     QString getPY(const QString &keys);
     QStringList getCandidate(const QString &keys);
private:
     QMap<QString, QStringList> py;
     QSqlDatabase db;
};

#endif // PY_H
