/*
 * Library data_handle type test program
 *
 * Copyright (C) 2010-2017, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <common.h>
#include <file_stream.h>
#include <types.h>

#if defined( HAVE_STDLIB_H ) || defined( WINAPI )
#include <stdlib.h>
#endif

#include "fvalue_test_libcerror.h"
#include "fvalue_test_libfvalue.h"
#include "fvalue_test_macros.h"
#include "fvalue_test_memory.h"
#include "fvalue_test_unused.h"

/* Tests the libfvalue_data_handle_free function
 * Returns 1 if successful or 0 if not
 */
int fvalue_test_data_handle_free(
     void )
{
	libcerror_error_t *error = NULL;
	int result               = 0;

	/* Test error cases
	 */
	result = libfvalue_data_handle_free(
	          NULL,
	          &error );

	FVALUE_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 -1 );

        FVALUE_TEST_ASSERT_IS_NOT_NULL(
         "error",
         error );

	libcerror_error_free(
	 &error );

	return( 1 );

on_error:
	if( error != NULL )
	{
		libcerror_error_free(
		 &error );
	}
	return( 0 );
}

/* The main program
 */
#if defined( HAVE_WIDE_SYSTEM_CHARACTER )
int wmain(
     int argc FVALUE_TEST_ATTRIBUTE_UNUSED,
     wchar_t * const argv[] FVALUE_TEST_ATTRIBUTE_UNUSED )
#else
int main(
     int argc FVALUE_TEST_ATTRIBUTE_UNUSED,
     char * const argv[] FVALUE_TEST_ATTRIBUTE_UNUSED )
#endif
{
	FVALUE_TEST_UNREFERENCED_PARAMETER( argc )
	FVALUE_TEST_UNREFERENCED_PARAMETER( argv )

	/* TODO: add tests for libfvalue_data_handle_initialize */

	FVALUE_TEST_RUN(
	 "libfvalue_data_handle_free",
	 fvalue_test_data_handle_free );

	/* TODO: add tests for libfvalue_data_handle_clone */

	/* TODO: add tests for libfvalue_data_handle_clear */

	/* TODO: add tests for libfvalue_data_handle_get_data */

	/* TODO: add tests for libfvalue_data_handle_set_data */

	/* TODO: add tests for libfvalue_data_handle_get_data_flags */

	/* TODO: add tests for libfvalue_data_handle_set_data_flags */

	/* TODO: add tests for libfvalue_data_handle_get_number_of_value_entries */

	/* TODO: add tests for libfvalue_data_handle_get_value_entry */

	/* TODO: add tests for libfvalue_data_handle_set_value_entry */

	/* TODO: add tests for libfvalue_data_handle_append_value_entry */

	/* TODO: add tests for libfvalue_data_handle_get_value_entry_data */

	/* TODO: add tests for libfvalue_data_handle_set_value_entry_data */

	/* TODO: add tests for libfvalue_data_handle_append_value_entry_data */

	return( EXIT_SUCCESS );

on_error:
	return( EXIT_FAILURE );
}

