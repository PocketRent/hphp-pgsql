#ifndef incl_HPHP_PDO_PGSQL_H_
#define incl_HPHP_PDO_PGSQL_H_

#include "hphp/runtime/base/type-string.h"
#include "hphp/runtime/ext/pdo_driver.h"

namespace HPHP {
class PDOPgSql : public PDODriver {
public:
    PDOPgSql();

    virtual PDOConnection* createConnectionObject();
};

long pdo_attr_lval(const Array& options, int opt, long defaultValue);

String pdo_attr_strval(const Array& options, int opt, const char *def);

enum {
    PDO_PGSQL_ATTR_DISABLE_NATIVE_PREPARED_STATEMENT = PDO_ATTR_DRIVER_SPECIFIC,
    PDO_PGSQL_ATTR_DISABLE_PREPARES,
};

const StaticString
    s_PGSQL_ATTR_DISABLE_NATIVE_PREPARED_STATEMENT("PGSQL_ATTR_DISABLE_NATIVE_PREPARED_STATEMENT "),
    s_PGSQL_ATTR_DISABLE_PREPARES("PGSQL_ATTR_DISABLE_PREPARES");
}
#endif
