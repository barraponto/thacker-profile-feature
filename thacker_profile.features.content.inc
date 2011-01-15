<?php

/**
 * Implementation of hook_content_default_fields().
 */
function thacker_profile_content_default_fields() {
  $fields = array();

  // Exported field: field_user_address
  $fields['profile-field_user_address'] = array(
    'field_name' => 'field_user_address',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'postal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'postal_field',
    'active' => '1',
    'widget' => array(
      'postal' => array(
        'selection_types' => array(
          'country' => 'country',
          'state' => 'state',
          'city' => 'city',
          'zip' => 0,
        ),
        'force_country' => 0,
        'force_state' => 0,
        'labels' => array(
          'country' => 'Country',
          'state' => 'State/province',
          'city' => 'City',
          'zip' => 'Postal code',
        ),
      ),
      'default_value' => array(
        '0' => array(
          'type' => 'country',
          'country' => 'BR',
          'city' => '',
          'zip' => '',
          'state' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Address',
      'weight' => '-4',
      'description' => '',
      'type' => 'postal_general',
      'module' => 'postal_field',
    ),
  );

  // Exported field: field_user_geocode
  $fields['profile-field_user_geocode'] = array(
    'field_name' => 'field_user_geocode',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'geo',
    'required' => '0',
    'multiple' => '0',
    'module' => 'geo',
    'active' => '1',
    'srid' => 4326,
    'geo_type' => 'point',
    'widget' => array(
      'geocode_fields' => array(
        'field_user_address' => array(
          'status' => 1,
          'handler' => 'geocode_google',
          'return' => 'point',
        ),
      ),
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'User Geocode',
      'weight' => '-3',
      'description' => '',
      'type' => 'geocode_geo',
      'module' => 'geocode_widget',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('User Geocode');

  return $fields;
}
