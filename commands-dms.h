#define __uqmi_dms_commands \
	__uqmi_command(dms_get_pin_status, get-pin-status, no, QMI_SERVICE_DMS), \
	__uqmi_command(dms_verify_pin1, verify-pin1, required, QMI_SERVICE_DMS), \
	__uqmi_command(dms_verify_pin2, verify-pin2, required, QMI_SERVICE_DMS) \

#define dms_helptext \
		"  --get-pin-status:                 Get PIN verification status\n" \
		"  --verify-pin1:                    Verify PIN1\n" \
		"  --verify-pin2:                    Verify PIN2\n" \
