# grabbed from gnudatalanguage
include(FindPackageHandleStandardArgs)
include(CheckLibraryExists)
find_path(RPC_INCLUDE_DIR NAMES "rpc/rpc.h" PATH_SUFFIXES "tirpc")
#is rpc from libtirpc?
check_library_exists(tirpc xdr_uint64_t "" HAS_LIBTIRPC)
if(HAS_LIBTIRPC)
	find_library(RPC_LIBRARY NAMES tirpc)
	set(RPC_LIBRARIES ${RPC_LIBRARY})
	find_package_handle_standard_args(RPC DEFAULT_MSG RPC_INCLUDE_DIR RPC_LIBRARY RPC_LIBRARIES)
else()
	find_package_handle_standard_args(RPC DEFAULT_MSG RPC_INCLUDE_DIR)
endif()

mark_as_advanced(RPC_INCLUDE_DIR RPC_LIBRARY RPC_LIBRARIES)

