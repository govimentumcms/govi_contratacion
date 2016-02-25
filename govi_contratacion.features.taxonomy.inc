<?php
/**
 * @file
 * govi_contratacion.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function govi_contratacion_taxonomy_default_vocabularies() {
  return array(
    'contrataci_n_periodicidad' => array(
      'name' => 'Contratación Periodicidad',
      'machine_name' => 'contrataci_n_periodicidad',
      'description' => 'Taxonomia que categoriza la periodicidad de la contratación de la Entidad',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'contratacion_clasificacion' => array(
      'name' => 'Contratación Clasificación',
      'machine_name' => 'contratacion_clasificacion',
      'description' => 'Taxonomía que categoriza la clasificación de la contratación de la Entidad',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
