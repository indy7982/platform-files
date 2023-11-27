# Establish ATDB environment variables.

# What is the directory for this script (might contain spaces).
dname="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

export ATDB_ROOT="$dname"
export ATDB_BIN="$dname"/bin
export PATH=$ATDB_BIN:$PATH
export ATDB_HANDLE=TESTDB
